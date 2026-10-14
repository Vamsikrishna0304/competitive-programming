

SELECT T.name AS team_name, COUNT(U.user_name) AS user_count, ROUND(AVG(U.rating),2) AS highest_avg_rating
FROM Teams T
JOIN Users U ON T.team_id = U.team_id
GROUP BY T.team_id, T.name
HAVING AVG(U.rating) = (
    SELECT MAX(avg_rating)
    FROM (
        SELECT AVG(rating) AS avg_rating
        FROM Users
        GROUP BY team_id
    ) AS subquery
);
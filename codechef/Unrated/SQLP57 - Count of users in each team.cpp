

SELECT T.name AS team_name, COUNT(U.user_name) AS user_count
FROM Teams T
LEFT JOIN Users U ON T.team_id = U.team_id
GROUP BY T.name
HAVING COUNT(U.user_name) > 0 order by team_name ASC;


SELECT college, COUNT(*) AS user_count
FROM Users
WHERE college IS NOT NULL
GROUP BY college
ORDER BY user_count ASC;
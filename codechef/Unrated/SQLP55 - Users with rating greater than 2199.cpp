

SELECT ROUND( COUNT(*) * 100.0 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Users
WHERE rating >= 2200;
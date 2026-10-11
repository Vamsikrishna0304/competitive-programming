

SELECT college, user_name
FROM Users
WHERE (college, rating) IN (
  SELECT college, MAX(rating)
  FROM Users
  GROUP BY college
);
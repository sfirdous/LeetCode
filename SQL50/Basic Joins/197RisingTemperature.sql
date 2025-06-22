# Write your MySQL query statement below
SELECT
today.id as Id
FROM Weather yesterday
CROSS JOIN Weather today
WHERE DATEDIFF(today.recordDate,yesterday.recordDate) = 1 and today.temperature > yesterday.temperature
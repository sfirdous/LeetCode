# Write your MySQL query statement below
SELECT
query_name,
ROUND(SUM(rating/position) / COUNT(query_name),2) as quality,
ROUND((SUM(CASE WHEN rating  < 3 THEN 1 ELSE 0 END) / COUNT(query_name))*100,2) as  poor_query_percentage
FROM Queries
group by query_name
# Write your MySQL query statement below
SELECT 
id,
movie,
description,
rating
FROM Cinema 
WHERE description != 'boring' and mod(id,2) 
ORDER BY rating DESC
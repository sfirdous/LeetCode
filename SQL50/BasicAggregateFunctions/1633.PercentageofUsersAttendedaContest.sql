SELECT 
contest_id ,
ROUND(((COUNT(user_id) /(SELECT 
COUNT(user_id) 
FROM Users)) * 100),2) as percentage
FROM Register
GROUP BY contest_id
ORDER BY ROUND(((COUNT(user_id) /(SELECT 
COUNT(user_id) 
FROM Users)) * 100),2) DESC , contest_id ASC 


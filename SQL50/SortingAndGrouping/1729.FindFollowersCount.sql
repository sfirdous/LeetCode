--Write your MySQL query statement below
SELECT
user_id,
COUNT(follower_id) as followers_count
FROM Followers
group by user_id

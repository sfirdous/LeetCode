/* Write your T-SQL query statement below */
select TOP 1
customer_number from Orders
group by customer_number
order by count(*) desc;
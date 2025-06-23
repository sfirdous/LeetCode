# Write your MySQL query statement below
SELECT
Prices.product_id,
IFNULL(ROUND(SUM(price * units) / SUM(units),2),0)  as average_price
FROM Prices
LEFT JOIN UnitsSold
ON Prices.product_id = UnitsSold.product_id and 
purchase_date between start_date and end_date   
GROUP BY Prices.product_id
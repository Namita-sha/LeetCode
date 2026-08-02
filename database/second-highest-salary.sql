# Write your MySQL query statement below
SELECT  # for null value
(SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1 OFFSET 1)
 AS SecondHighestSalary;
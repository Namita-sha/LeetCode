# Write your MySQL query statement below
SELECT   name,Unique_id 
FROM Employees 
LEFT JOIN EmployeeUNI 
ON Employees.id = EmployeeUNI.id;
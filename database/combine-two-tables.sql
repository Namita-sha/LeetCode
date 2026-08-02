# Write your MySQL query statement below
SELECT p.Firstname,p.lastname,a.city,a.state FROM person p left JOIN address a ON p.personId = a.personId;
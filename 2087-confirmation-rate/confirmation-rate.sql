-- Write your PostgreSQL query statement below
select u.user_id, 
(
    round(
        sum(case when c.action = 'confirmed' then 1.00
           else 0.00
           end)/
        count(*)
        ,2)
)
as confirmation_rate
from signups u
left join confirmations c on u.user_id = c.user_id
group by 1
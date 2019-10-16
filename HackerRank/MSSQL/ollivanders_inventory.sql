-- @author : srvsaha
-- Link: https://www.hackerrank.com/challenges/harry-potter-and-wands

select w.id, temp.age, temp.min_, temp.power from wands w, wands_property wp, (select wp.age, MIN(coins_needed) as min_, power from wands w, wands_property wp
where w.code = wp.code and wp.is_evil = 0
group by age, power) temp
where wp.age = temp.age and w.coins_needed = temp.min_ and w.power = temp.power and w.code = wp.code
order by temp.power desc, temp.age desc

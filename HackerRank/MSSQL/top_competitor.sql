-- @author: sauravsaha
-- Link: https://www.hackerrank.com/challenges/full-score
select s.hacker_id, h.name
from submissions s, challenges c, hackers h, difficulty d
where s.hacker_id = h.hacker_id 
and s.challenge_id = c.challenge_id
and c.difficulty_level = d.difficulty_level
and s.score = d.score
group by s.hacker_id, h.name having count(s.challenge_id) > 1 
order by count(s.challenge_id) desc, hacker_id

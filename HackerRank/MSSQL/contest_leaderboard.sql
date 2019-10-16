-- @author: sauravsaha
-- Link: https://www.hackerrank.com/challenges/contest-leaderboard
select hacker_id, hacker_name, sum(max_score) from
(select s.hacker_id as hacker_id, h.name as hacker_name, max(s.score) as max_score from submissions s, hackers h
where  s.hacker_id = h.hacker_id
group by s.hacker_id, h.name, s.challenge_id) as temp
group by hacker_id, hacker_name having sum(max_score) > 0
order by sum(max_score) desc, hacker_id

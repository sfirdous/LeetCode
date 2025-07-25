select name, sum(distance) as travelled_distance  from Users
left join Rides on Users.id = Rides.user_id
group by distance 

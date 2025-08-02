update salary set sex = 
CASE sex
 WHEN  'm' then 'f'
    else  'm'
END
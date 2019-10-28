
# Variables
current_value = 0
annual_rate = 1.097
monthly_contribution = 400
age = 27
retirement_age = 65

monthly_rate = 1 + ((annual_rate-1) / 12.0)

print (monthly_rate)

for year in range(age,retirement_age+1):

	for month in range(0,12):
		current_value *= monthly_rate
		current_value += monthly_contribution

	print "Age {}: ${:,}".format(year, int(current_value))

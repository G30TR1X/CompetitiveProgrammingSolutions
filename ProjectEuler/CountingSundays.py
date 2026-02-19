import calendar

cal = calendar.Calendar()

starting_year = 1901
ending_year = 2001

sundays = 0

for year in range(starting_year, ending_year):
    for month in range(1, 13):
        current_month = cal.monthdayscalendar(year, month)
        if (current_month[0][6] == 1):
            sundays += 1

print(sundays)

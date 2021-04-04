mport calendar
mm,dd,yy = input().split()

weekdays=["MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"]
result = calendar.weekday(int(yy),int(mm),int(dd))

print(weekdays[result])

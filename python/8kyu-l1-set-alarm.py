"""
Name: L1: Set Alarm
Link: https://www.codewars.com/kata/568dcc3c7f12767a62000038/solutions/r
"""

# Solution 1
def set_alarm(employed, vacation):
    # If logical test is met, return True.
    if employed == True and vacation == False:
        return True
    # Otherwise, return False. 
    else:
        return False

print(set_alarm(True, False))

# Solution 2
def set_alarm2(employed, vacation):
    return employed == True and vacation == False

print(set_alarm2(True, True))


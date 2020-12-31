# Name: Beginner Series #2 Clock
# Link: https://www.codewars.com/kata/55f9bca8ecaa9eac7100004a


past <- function(h, m, s) {
  # Take h and multiply it by number of milliseconds in n hours.
  hour <- h * 3600000
  # Take m and multiply it by the number of milliseconds in n minutes. 
  minute <- m * 60000
  # Take s and multiply it by the number of milliseconds in n seconds. 
  second <- s * 1000
  # Return the total by summing hour, minute, and second. 
  print(sum(hour, minute, second))
}
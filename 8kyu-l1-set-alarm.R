# Name: L1: Set Alarm
# link: https://www.codewars.com/kata/568dcc3c7f12767a62000038


set_alarm <- function(employed, vacation) {
  # If employed is TRUE and vacation is FALSE.
  if (employed == TRUE && vacation == FALSE) {
    return(TRUE)
    # Otherwise, return FALSE.
  } else {
    return(FALSE)
  }
}


set_alarm <- function(employed, vacation) {
  # Given the set of logic, if satisfied return TRUE. If not, return FALSE.
   return(employed == TRUE && vacation == FALSE)
}

# Name: Keep Hydrated!
# Link: https://www.codewars.com/kata/582cb0224e56e068d800003c/train/r


litres <- function(time){
  # fixed 0.5 litres per hour consumption.
  ltr_hr <- 0.5
  # use floor() to round down.
  floor(time * ltr_hr)
  
}


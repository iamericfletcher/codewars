# Name: Drying Potatoes
# Link: https://www.codewars.com/kata/58ce8725c835848ad6000007/train/r

potatoes <- function(p0, w0, p1) {
  
  w1 <- floor(w0 * (p0 - 100) / (p1 - 100))
  
  return(w1)
}

potatoes(82, 127, 80)

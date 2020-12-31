# Name: Sum Arrays
# Link: https://www.codewars.com/kata/53dc54212259ed3d4f00071c


sum_array <- function(a){
  ifelse(is.numeric(a), sum(a), 0)
}
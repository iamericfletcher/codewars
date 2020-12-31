# Name: Reversed Strings
# Link: https://www.codewars.com/kata/5168bb5dfe9a00b126000018

solution <- function(s){
  
  vapply(lapply(strsplit(s, split = ""), rev), paste, collapse = "", character(1))
  
}

solution('world')


























# library(purrr)
# solution <- function(s){
#   vapply(map(strsplit(s, split = NULL), rev), paste, collapse ="", character(1))
# }




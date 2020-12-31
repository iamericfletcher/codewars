# Name: Exes and Ohs
# Link: https://www.codewars.com/kata/55908aad6620c066bc00002a/train/r

xo <- function(s) {
  out_x <- str_count(s, pattern = "x|X")
  out_o <- str_count(s, pattern = "o|O")
  if (out_x == 0 && out_o == 0) {
    print(TRUE)
  } else if (out_x != out_o) {
      print(FALSE)
  } else if (out_x == out_o) {
      print(TRUE)
  }
}



xo2 <- function(s){
  s <- unlist(strsplit(casefold(s), ""))
  sum(s == "o") == sum(s == "x")
}

microbenchmark::microbenchmark(xo("ooxX"), xo2("ooxX"))



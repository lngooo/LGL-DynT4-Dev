define dso_local i32 @ht(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32 (i32)*
  store i32 %0, i32* %2
  store i32 (i32)* @abs, i32 (i32)** %3
  %5 = load i32 (i32)*, i32 (i32)** %3
  %6 = load i32, i32* %2
  %7 = call i32 %5(i32 %6)
  ret i32 %7
}
declare i32 @abs(i32)

@.str = constant [3 x i8] c"%x\00"
@.str.1 = constant [3 x i8] c"%d\00"
define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32 (i8*, i8*, ...)*
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 (i8*, i8*, ...)* @__isoc99_sscanf, i32 (i8*, i8*, ...)** %4
  %7 = load i32 (i8*, i8*, ...)*, i32 (i8*, i8*, ...)** %4
  %8 = load i8*, i8** %2
  %9 = call i32 (i8*, i8*, ...) %7(i8* %8, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32* %3)
  %10 = load i32, i32* %3
  ret i32 %10
}
declare i32 @__isoc99_sscanf(i8*, i8*, ...)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @HexToInt(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)

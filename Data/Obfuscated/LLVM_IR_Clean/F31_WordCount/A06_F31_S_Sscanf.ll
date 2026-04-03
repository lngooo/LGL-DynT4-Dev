@.str = constant [8 x i8] c"%255s%n\00"
define dso_local i32 @R6(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca [256 x i8]
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %12 = call i32 (i8*, i8*, ...) @__isoc99_sscanf(i8* %10, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str, i64 0, i64 0), i8* %11, i32* %4)
  %13 = icmp eq i32 %12, 1
  br i1 %13, label %14, label %21
14:
  %15 = load i32, i32* %3
  %16 = add nsw i32 %15, 1
  store i32 %16, i32* %3
  %17 = load i32, i32* %4
  %18 = load i8*, i8** %2
  %19 = sext i32 %17 to i64
  %20 = getelementptr inbounds i8, i8* %18, i64 %19
  store i8* %20, i8** %2
  br label %9
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i32 @__isoc99_sscanf(i8*, i8*, ...)

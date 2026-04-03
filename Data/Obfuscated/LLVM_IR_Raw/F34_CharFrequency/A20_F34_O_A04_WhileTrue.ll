@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @K9(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i8*
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  %9 = load i8*, i8** %3
  store i8* %9, i8** %6
  br label %10
10:
  br label %11
11:
  %12 = load i8*, i8** %6
  %13 = load i8, i8* %4
  %14 = sext i8 %13 to i32
  %15 = call i8* @strchr(i8* %12, i32 %14)
  store i8* %15, i8** %6
  %16 = load i8*, i8** %6
  %17 = icmp eq i8* %16, null
  br i1 %17, label %18, label %19
18:
  br label %24
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  %22 = load i8*, i8** %6
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %6
  br label %10
24:
  %25 = load i32, i32* %5
  ret i32 %25
}
declare i8* @strchr(i8*, i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = getelementptr inbounds i8, i8* %15, i64 0
  %17 = load i8, i8* %16
  %18 = call i32 @K9(i8* %12, i8 signext %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)

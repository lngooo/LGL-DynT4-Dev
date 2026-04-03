@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8
  store i8* %0, i8** %4
  store i8 %1, i8* %5
  %6 = load i8*, i8** %4
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %25
11:
  %12 = load i8*, i8** %4
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = load i8, i8* %5
  %16 = sext i8 %15 to i32
  %17 = icmp eq i32 %14, %16
  %18 = zext i1 %17 to i64
  %19 = select i1 %17, i32 1, i32 0
  %20 = load i8*, i8** %4
  %21 = getelementptr inbounds i8, i8* %20, i64 1
  %22 = load i8, i8* %5
  %23 = call i32 @CharFrequency(i8* %21, i8 signext %22)
  %24 = add nsw i32 %19, %23
  store i32 %24, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
}
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
  %18 = call i32 @CharFrequency(i8* %12, i8 signext %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)

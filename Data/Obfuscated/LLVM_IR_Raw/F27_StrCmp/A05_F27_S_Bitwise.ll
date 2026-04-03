@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @FsTu(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  br label %5
5:
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = load i8*, i8** %4
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = xor i32 %8, %11
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %19, label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br label %19
19:
  %20 = phi i1 [ false, %5 ], [ %18, %14 ]
  br i1 %20, label %21, label %26
21:
  %22 = load i8*, i8** %3
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %3
  %24 = load i8*, i8** %4
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %4
  br label %5
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = zext i8 %28 to i32
  %30 = load i8*, i8** %4
  %31 = load i8, i8* %30
  %32 = zext i8 %31 to i32
  %33 = sub nsw i32 %29, %32
  ret i32 %33
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
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @FsTu(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)

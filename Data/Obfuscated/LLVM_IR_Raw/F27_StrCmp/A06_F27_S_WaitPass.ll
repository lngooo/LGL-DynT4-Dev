@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @r(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %7
7:
  %8 = load i8*, i8** %3
  %9 = load i32, i32* %5
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = load i8*, i8** %4
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp eq i32 %13, %19
  br i1 %20, label %21, label %29
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %5
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp ne i32 %27, 0
  br label %29
29:
  %30 = phi i1 [ false, %7 ], [ %28, %21 ]
  br i1 %30, label %31, label %34
31:
  %32 = load i32, i32* %5
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %5
  br label %7
34:
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %5
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  %41 = load i8*, i8** %4
  %42 = load i32, i32* %5
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = zext i8 %45 to i32
  %47 = sub nsw i32 %40, %46
  ret i32 %47
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
  %16 = call i32 @r(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)

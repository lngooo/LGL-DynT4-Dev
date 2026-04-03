@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8**
  %6 = alloca i8**
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i8** %3, i8*** %5
  store i8** %4, i8*** %6
  br label %9
9:
  %10 = load i8**, i8*** %5
  %11 = load i8*, i8** %10
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %25
15:
  %16 = load i8**, i8*** %5
  %17 = load i8*, i8** %16
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = load i8**, i8*** %6
  %21 = load i8*, i8** %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = icmp eq i32 %19, %23
  br label %25
25:
  %26 = phi i1 [ false, %9 ], [ %24, %15 ]
  br i1 %26, label %27, label %34
27:
  %28 = load i8**, i8*** %5
  %29 = load i8*, i8** %28
  %30 = getelementptr inbounds i8, i8* %29, i32 1
  store i8* %30, i8** %28
  %31 = load i8**, i8*** %6
  %32 = load i8*, i8** %31
  %33 = getelementptr inbounds i8, i8* %32, i32 1
  store i8* %33, i8** %31
  br label %9
34:
  %35 = load i8**, i8*** %5
  %36 = load i8*, i8** %35
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i32
  %39 = load i8**, i8*** %6
  %40 = load i8*, i8** %39
  %41 = load i8, i8* %40
  %42 = zext i8 %41 to i32
  %43 = sub nsw i32 %38, %42
  ret i32 %43
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
  %16 = call i32 @StrCmp(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)

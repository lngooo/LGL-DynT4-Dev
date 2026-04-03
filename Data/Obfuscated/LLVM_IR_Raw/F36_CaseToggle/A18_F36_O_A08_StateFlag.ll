@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @M(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %55
10:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp sge i32 %14, 97
  br i1 %15, label %16, label %21
16:
  %17 = load i8*, i8** %2
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp sle i32 %19, 122
  br label %21
21:
  %22 = phi i1 [ false, %10 ], [ %20, %16 ]
  %23 = zext i1 %22 to i32
  store i32 %23, i32* %3
  %25 = load i8*, i8** %2
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sge i32 %27, 65
  br i1 %28, label %29, label %34
29:
  %30 = load i8*, i8** %2
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = icmp sle i32 %32, 90
  br label %34
34:
  %35 = phi i1 [ false, %21 ], [ %33, %29 ]
  %36 = zext i1 %35 to i32
  store i32 %36, i32* %4
  %38 = load i32, i32* %3
  %39 = mul nsw i32 %38, -32
  %40 = load i32, i32* %4
  %41 = mul nsw i32 %40, 32
  %42 = add nsw i32 %39, %41
  store i32 %42, i32* %5
  %43 = load i8*, i8** %2
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = load i32, i32* %5
  %47 = add nsw i32 %45, %46
  %48 = trunc i32 %47 to i8
  %49 = load i8*, i8** %2
  store i8 %48, i8* %49
  %50 = load i8*, i8** %2
  %51 = getelementptr inbounds i8, i8* %50, i32 1
  store i8* %51, i8** %2
  br label %6
55:
  ret void
}
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
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @M(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)

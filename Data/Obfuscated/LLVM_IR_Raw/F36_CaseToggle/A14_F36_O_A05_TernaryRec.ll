@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @ueD(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = load i8, i8* %3
  %5 = icmp ne i8 %4, 0
  br i1 %5, label %7, label %6
6:
  br label %49
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = sext i8 %9 to i32
  %11 = icmp sge i32 %10, 97
  br i1 %11, label %12, label %22
12:
  %13 = load i8*, i8** %2
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp sle i32 %15, 122
  br i1 %16, label %17, label %22
17:
  %18 = load i8*, i8** %2
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = sub nsw i32 %20, 32
  br label %43
22:
  %23 = load i8*, i8** %2
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp sge i32 %25, 65
  br i1 %26, label %27, label %37
27:
  %28 = load i8*, i8** %2
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp sle i32 %30, 90
  br i1 %31, label %32, label %37
32:
  %33 = load i8*, i8** %2
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = add nsw i32 %35, 32
  br label %41
37:
  %38 = load i8*, i8** %2
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  br label %41
41:
  %42 = phi i32 [ %36, %32 ], [ %40, %37 ]
  br label %43
43:
  %44 = phi i32 [ %21, %17 ], [ %42, %41 ]
  %45 = trunc i32 %44 to i8
  %46 = load i8*, i8** %2
  store i8 %45, i8* %46
  %47 = load i8*, i8** %2
  %48 = getelementptr inbounds i8, i8* %47, i64 1
  call void @ueD(i8* %48)
  br label %49
49:
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
  call void @ueD(i8* %12)
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

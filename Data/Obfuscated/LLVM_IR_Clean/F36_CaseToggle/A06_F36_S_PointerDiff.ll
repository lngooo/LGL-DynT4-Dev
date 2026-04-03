define dso_local void @fZg6(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i8
  store i8* %0, i8** %2
  %6 = load i8*, i8** %2
  store i8* %6, i8** %3
  br label %7
7:
  %8 = load i8*, i8** %3
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %45
11:
  %12 = load i8*, i8** %3
  %13 = load i8, i8* %12
  store i8 %13, i8* %4
  %14 = load i8, i8* %4
  %15 = sext i8 %14 to i32
  %16 = icmp sge i32 %15, 65
  br i1 %16, label %17, label %27
17:
  %18 = load i8, i8* %4
  %19 = sext i8 %18 to i32
  %20 = icmp sle i32 %19, 90
  br i1 %20, label %21, label %27
21:
  %22 = load i8, i8* %4
  %23 = sext i8 %22 to i32
  %24 = add nsw i32 %23, 32
  %25 = trunc i32 %24 to i8
  %26 = load i8*, i8** %3
  store i8 %25, i8* %26
  br label %42
27:
  %28 = load i8, i8* %4
  %29 = sext i8 %28 to i32
  %30 = icmp sge i32 %29, 97
  br i1 %30, label %31, label %41
31:
  %32 = load i8, i8* %4
  %33 = sext i8 %32 to i32
  %34 = icmp sle i32 %33, 122
  br i1 %34, label %35, label %41
35:
  %36 = load i8, i8* %4
  %37 = sext i8 %36 to i32
  %38 = sub nsw i32 %37, 32
  %39 = trunc i32 %38 to i8
  %40 = load i8*, i8** %3
  store i8 %39, i8* %40
  br label %41
41:
  br label %42
42:
  %43 = load i8*, i8** %3
  %44 = getelementptr inbounds i8, i8* %43, i32 1
  store i8* %44, i8** %3
  br label %7
45:
  ret void
}

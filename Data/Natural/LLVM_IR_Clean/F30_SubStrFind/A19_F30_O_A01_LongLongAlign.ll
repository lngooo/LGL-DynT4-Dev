define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i64
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %11 = load i8*, i8** %4
  %12 = call i64 @strlen(i8* %11)
  store i64 %12, i64* %6
  %14 = load i8*, i8** %5
  %15 = call i64 @strlen(i8* %14)
  store i64 %15, i64* %7
  %16 = load i64, i64* %7
  %17 = icmp eq i64 %16, 0
  br i1 %17, label %18, label %19
18:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %47
19:
  store i64 0, i64* %9
  br label %21
21:
  %22 = load i64, i64* %9
  %23 = load i64, i64* %6
  %24 = load i64, i64* %7
  %25 = sub nsw i64 %23, %24
  %26 = icmp sle i64 %22, %25
  br i1 %26, label %28, label %27
27:
  store i32 2, i32* %8
  br label %43
28:
  %29 = load i8*, i8** %4
  %30 = load i64, i64* %9
  %31 = getelementptr inbounds i8, i8* %29, i64 %30
  %32 = load i8*, i8** %5
  %33 = load i64, i64* %7
  %34 = call i32 @memcmp(i8* %31, i8* %32, i64 %33)
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %36, label %39
36:
  %37 = load i64, i64* %9
  %38 = trunc i64 %37 to i32
  store i32 %38, i32* %3
  store i32 1, i32* %8
  br label %43
39:
  br label %40
40:
  %41 = load i64, i64* %9
  %42 = add nsw i64 %41, 1
  store i64 %42, i64* %9
  br label %21
43:
  %45 = load i32, i32* %8
  switch i32 %45, label %47 [
    i32 2, label %46
  ]
46:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %47
47:
  %50 = load i32, i32* %3
  ret i32 %50
}
declare i64 @strlen(i8*)
declare i32 @memcmp(i8*, i8*, i64)

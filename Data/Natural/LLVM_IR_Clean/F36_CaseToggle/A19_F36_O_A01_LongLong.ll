define dso_local void @CaseToggle(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i64
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i32, i32* %3
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds i8, i8* %7, i64 %9
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %15, label %13
13:
  br label %52
15:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %3
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i64
  store i64 %22, i64* %4
  %23 = load i64, i64* %4
  %24 = icmp sge i64 %23, 97
  br i1 %24, label %25, label %31
25:
  %26 = load i64, i64* %4
  %27 = icmp sle i64 %26, 122
  br i1 %27, label %28, label %31
28:
  %29 = load i64, i64* %4
  %30 = sub nsw i64 %29, 32
  store i64 %30, i64* %4
  br label %41
31:
  %32 = load i64, i64* %4
  %33 = icmp sge i64 %32, 65
  br i1 %33, label %34, label %40
34:
  %35 = load i64, i64* %4
  %36 = icmp sle i64 %35, 90
  br i1 %36, label %37, label %40
37:
  %38 = load i64, i64* %4
  %39 = add nsw i64 %38, 32
  store i64 %39, i64* %4
  br label %40
40:
  br label %41
41:
  %42 = load i64, i64* %4
  %43 = trunc i64 %42 to i8
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %3
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  store i8 %43, i8* %47
  br label %49
49:
  %50 = load i32, i32* %3
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %3
  br label %6
52:
  ret void
}

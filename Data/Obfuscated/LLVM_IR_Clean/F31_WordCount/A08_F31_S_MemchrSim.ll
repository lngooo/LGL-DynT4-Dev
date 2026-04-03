define dso_local i32 @HO(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  store i64 %9, i64* %4
  store i64 0, i64* %5
  br label %11
11:
  %12 = load i64, i64* %5
  %13 = load i64, i64* %4
  %14 = icmp ult i64 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %57
17:
  %18 = load i8*, i8** %2
  %19 = load i64, i64* %5
  %20 = getelementptr inbounds i8, i8* %18, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = icmp ne i32 %22, 32
  br i1 %23, label %24, label %53
24:
  %25 = load i8*, i8** %2
  %26 = load i64, i64* %5
  %27 = getelementptr inbounds i8, i8* %25, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp ne i32 %29, 9
  br i1 %30, label %31, label %53
31:
  %32 = load i64, i64* %5
  %33 = icmp eq i64 %32, 0
  br i1 %33, label %50, label %34
34:
  %35 = load i8*, i8** %2
  %36 = load i64, i64* %5
  %37 = sub i64 %36, 1
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp eq i32 %40, 32
  br i1 %41, label %50, label %42
42:
  %43 = load i8*, i8** %2
  %44 = load i64, i64* %5
  %45 = sub i64 %44, 1
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp eq i32 %48, 9
  br i1 %49, label %50, label %53
50:
  %51 = load i32, i32* %3
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %3
  br label %53
53:
  br label %54
54:
  %55 = load i64, i64* %5
  %56 = add i64 %55, 1
  store i64 %56, i64* %5
  br label %11
57:
  %58 = load i32, i32* %3
  ret i32 %58
}
declare i64 @strlen(i8*)

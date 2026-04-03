define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i64
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %12 = load i8*, i8** %4
  %13 = call i64 @strlen(i8* %12)
  store i64 %13, i64* %6
  %15 = load i8*, i8** %5
  %16 = call i64 @strlen(i8* %15)
  store i64 %16, i64* %7
  %18 = load i64, i64* %6
  %19 = load i64, i64* %7
  %20 = icmp ult i64 %18, %19
  br i1 %20, label %21, label %23
21:
  %22 = load i64, i64* %6
  br label %25
23:
  %24 = load i64, i64* %7
  br label %25
25:
  %26 = phi i64 [ %22, %21 ], [ %24, %23 ]
  store i64 %26, i64* %8
  store i64 0, i64* %9
  br label %28
28:
  %29 = load i64, i64* %9
  %30 = load i64, i64* %8
  %31 = icmp ult i64 %29, %30
  br i1 %31, label %33, label %32
32:
  store i32 2, i32* %10
  br label %61
33:
  %34 = load i8*, i8** %4
  %35 = load i64, i64* %9
  %36 = getelementptr inbounds i8, i8* %34, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i8*, i8** %5
  %40 = load i64, i64* %9
  %41 = getelementptr inbounds i8, i8* %39, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp ne i32 %38, %43
  br i1 %44, label %45, label %57
45:
  %46 = load i8*, i8** %4
  %47 = load i64, i64* %9
  %48 = getelementptr inbounds i8, i8* %46, i64 %47
  %49 = load i8, i8* %48
  %50 = zext i8 %49 to i32
  %51 = load i8*, i8** %5
  %52 = load i64, i64* %9
  %53 = getelementptr inbounds i8, i8* %51, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  %56 = sub nsw i32 %50, %55
  store i32 %56, i32* %3
  store i32 1, i32* %10
  br label %61
57:
  br label %58
58:
  %59 = load i64, i64* %9
  %60 = add i64 %59, 1
  store i64 %60, i64* %9
  br label %28
61:
  %63 = load i32, i32* %10
  switch i32 %63, label %76 [
    i32 2, label %64
  ]
64:
  %65 = load i8*, i8** %4
  %66 = load i64, i64* %8
  %67 = getelementptr inbounds i8, i8* %65, i64 %66
  %68 = load i8, i8* %67
  %69 = zext i8 %68 to i32
  %70 = load i8*, i8** %5
  %71 = load i64, i64* %8
  %72 = getelementptr inbounds i8, i8* %70, i64 %71
  %73 = load i8, i8* %72
  %74 = zext i8 %73 to i32
  %75 = sub nsw i32 %69, %74
  store i32 %75, i32* %3
  store i32 1, i32* %10
  br label %76
76:
  %80 = load i32, i32* %3
  ret i32 %80
}
declare i64 @strlen(i8*)

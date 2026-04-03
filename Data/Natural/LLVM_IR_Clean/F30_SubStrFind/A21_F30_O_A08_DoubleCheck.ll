define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %11 = load i8*, i8** %4
  %12 = call i64 @strlen(i8* %11)
  %13 = trunc i64 %12 to i32
  store i32 %13, i32* %6
  %15 = load i8*, i8** %5
  %16 = call i64 @strlen(i8* %15)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %7
  %18 = load i32, i32* %7
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %82
21:
  store i32 0, i32* %9
  br label %23
23:
  %24 = load i32, i32* %9
  %25 = load i32, i32* %6
  %26 = load i32, i32* %7
  %27 = sub nsw i32 %25, %26
  %28 = icmp sle i32 %24, %27
  br i1 %28, label %30, label %29
29:
  store i32 2, i32* %8
  br label %78
30:
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %9
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i8*, i8** %5
  %38 = getelementptr inbounds i8, i8* %37, i64 0
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp eq i32 %36, %40
  br i1 %41, label %42, label %74
42:
  %43 = load i8*, i8** %4
  %44 = load i32, i32* %9
  %45 = load i32, i32* %7
  %46 = add nsw i32 %44, %45
  %47 = sub nsw i32 %46, 1
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %43, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = load i8*, i8** %5
  %53 = load i32, i32* %7
  %54 = sub nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %52, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = icmp eq i32 %51, %58
  br i1 %59, label %60, label %73
60:
  %61 = load i8*, i8** %4
  %62 = load i32, i32* %9
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  %65 = load i8*, i8** %5
  %66 = load i32, i32* %7
  %67 = sext i32 %66 to i64
  %68 = call i32 @strncmp(i8* %64, i8* %65, i64 %67)
  %69 = icmp eq i32 %68, 0
  br i1 %69, label %70, label %72
70:
  %71 = load i32, i32* %9
  store i32 %71, i32* %3
  store i32 1, i32* %8
  br label %78
72:
  br label %73
73:
  br label %74
74:
  br label %75
75:
  %76 = load i32, i32* %9
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %9
  br label %23
78:
  %80 = load i32, i32* %8
  switch i32 %80, label %82 [
    i32 2, label %81
  ]
81:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %82
82:
  %85 = load i32, i32* %3
  ret i32 %85
}
declare i64 @strlen(i8*)
declare i32 @strncmp(i8*, i8*, i64)

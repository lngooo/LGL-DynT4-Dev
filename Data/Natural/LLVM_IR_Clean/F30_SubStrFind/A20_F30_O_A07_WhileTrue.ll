define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %12 = load i8*, i8** %4
  store i8* %12, i8** %6
  %14 = load i8*, i8** %5
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %7
  %17 = load i32, i32* %7
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %20
19:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %78
20:
  br label %21
21:
  br label %22
22:
  %23 = load i8*, i8** %6
  %24 = load i8*, i8** %5
  %25 = getelementptr inbounds i8, i8* %24, i64 0
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = call i8* @strchr(i8* %23, i32 %27)
  store i8* %28, i8** %6
  %29 = load i8*, i8** %6
  %30 = icmp ne i8* %29, null
  br i1 %30, label %32, label %31
31:
  br label %77
32:
  store i32 1, i32* %9
  store i32 0, i32* %10
  br label %35
35:
  %36 = load i32, i32* %10
  %37 = load i32, i32* %7
  %38 = icmp slt i32 %36, %37
  br i1 %38, label %41, label %39
39:
  store i32 4, i32* %8
  br label %60
41:
  %42 = load i8*, i8** %6
  %43 = load i32, i32* %10
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = load i8*, i8** %5
  %49 = load i32, i32* %10
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp ne i32 %47, %53
  br i1 %54, label %55, label %56
55:
  store i32 0, i32* %9
  br label %56
56:
  br label %57
57:
  %58 = load i32, i32* %10
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %10
  br label %35
60:
  %61 = load i32, i32* %9
  %62 = icmp ne i32 %61, 0
  br i1 %62, label %63, label %70
63:
  %64 = load i8*, i8** %6
  %65 = load i8*, i8** %4
  %66 = ptrtoint i8* %64 to i64
  %67 = ptrtoint i8* %65 to i64
  %68 = sub i64 %66, %67
  %69 = trunc i64 %68 to i32
  store i32 %69, i32* %3
  store i32 1, i32* %8
  br label %73
70:
  %71 = load i8*, i8** %6
  %72 = getelementptr inbounds i8, i8* %71, i32 1
  store i8* %72, i8** %6
  store i32 0, i32* %8
  br label %73
73:
  %75 = load i32, i32* %8
  switch i32 %75, label %78 [
    i32 0, label %76
  ]
76:
  br label %21
77:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %78
78:
  %81 = load i32, i32* %3
  ret i32 %81
}
declare i64 @strlen(i8*)
declare i8* @strchr(i8*, i32)

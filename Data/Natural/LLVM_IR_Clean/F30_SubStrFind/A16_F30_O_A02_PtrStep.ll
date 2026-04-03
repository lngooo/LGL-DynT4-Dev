define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i8*
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %12 = load i8*, i8** %5
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %6
  %15 = load i32, i32* %6
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %76
18:
  %20 = load i8*, i8** %4
  store i8* %20, i8** %8
  br label %21
21:
  %22 = load i8*, i8** %8
  %23 = load i8, i8* %22
  %24 = icmp ne i8 %23, 0
  br i1 %24, label %26, label %25
25:
  store i32 2, i32* %7
  br label %72
26:
  store i32 1, i32* %9
  store i32 0, i32* %10
  br label %29
29:
  %30 = load i32, i32* %10
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  store i32 5, i32* %7
  br label %54
35:
  %36 = load i8*, i8** %8
  %37 = load i32, i32* %10
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = load i8*, i8** %5
  %43 = load i32, i32* %10
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp ne i32 %41, %47
  br i1 %48, label %49, label %50
49:
  store i32 0, i32* %9
  br label %50
50:
  br label %51
51:
  %52 = load i32, i32* %10
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %10
  br label %29
54:
  %55 = load i32, i32* %9
  %56 = icmp ne i32 %55, 0
  br i1 %56, label %57, label %64
57:
  %58 = load i8*, i8** %8
  %59 = load i8*, i8** %4
  %60 = ptrtoint i8* %58 to i64
  %61 = ptrtoint i8* %59 to i64
  %62 = sub i64 %60, %61
  %63 = trunc i64 %62 to i32
  store i32 %63, i32* %3
  store i32 1, i32* %7
  br label %65
64:
  store i32 0, i32* %7
  br label %65
65:
  %67 = load i32, i32* %7
  switch i32 %67, label %72 [
    i32 0, label %68
  ]
68:
  br label %69
69:
  %70 = load i8*, i8** %8
  %71 = getelementptr inbounds i8, i8* %70, i64 1
  store i8* %71, i8** %8
  br label %21
72:
  %74 = load i32, i32* %7
  switch i32 %74, label %76 [
    i32 2, label %75
  ]
75:
  store i32 -1, i32* %3
  store i32 1, i32* %7
  br label %76
76:
  %78 = load i32, i32* %3
  ret i32 %78
}
declare i64 @strlen(i8*)

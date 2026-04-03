define dso_local i32 @Reaf(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %10 = load i8*, i8** %4
  %11 = call i64 @strlen(i8* %10)
  %12 = load i8*, i8** %5
  %13 = call i64 @strlen(i8* %12)
  %14 = icmp ne i64 %11, %13
  br i1 %14, label %15, label %16
15:
  store i32 0, i32* %3
  br label %82
16:
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %21
21:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %8
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %28, label %69
28:
  %29 = load i32, i32* %9
  switch i32 %29, label %68 [
    i32 0, label %30
    i32 1, label %39
    i32 2, label %48
    i32 3, label %57
  ]
30:
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i32, i32* %6
  %38 = xor i32 %37, %36
  store i32 %38, i32* %6
  store i32 1, i32* %9
  br label %68
39:
  %40 = load i8*, i8** %5
  %41 = load i32, i32* %8
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = load i32, i32* %6
  %47 = xor i32 %46, %45
  store i32 %47, i32* %6
  store i32 2, i32* %9
  br label %68
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %8
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = load i32, i32* %7
  %56 = add nsw i32 %55, %54
  store i32 %56, i32* %7
  store i32 3, i32* %9
  br label %68
57:
  %58 = load i8*, i8** %5
  %59 = load i32, i32* %8
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = load i32, i32* %7
  %65 = sub nsw i32 %64, %63
  store i32 %65, i32* %7
  store i32 0, i32* %9
  %66 = load i32, i32* %8
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %8
  br label %68
68:
  br label %21
69:
  %70 = load i32, i32* %6
  %71 = icmp eq i32 %70, 0
  br i1 %71, label %72, label %75
72:
  %73 = load i32, i32* %7
  %74 = icmp eq i32 %73, 0
  br label %75
75:
  %76 = phi i1 [ false, %69 ], [ %74, %72 ]
  %77 = zext i1 %76 to i32
  store i32 %77, i32* %3
  br label %82
82:
  %83 = load i32, i32* %3
  ret i32 %83
}
declare i64 @strlen(i8*)

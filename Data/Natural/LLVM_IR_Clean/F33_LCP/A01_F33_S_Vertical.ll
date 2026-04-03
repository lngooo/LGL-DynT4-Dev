define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i8
  %9 = alloca i32
  %10 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %84
14:
  store i32 0, i32* %7
  br label %16
16:
  %17 = load i8**, i8*** %4
  %18 = getelementptr inbounds i8*, i8** %17, i64 0
  %19 = load i8*, i8** %18
  %20 = load i32, i32* %7
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = icmp ne i8 %23, 0
  br i1 %24, label %25, label %76
25:
  %26 = load i8**, i8*** %4
  %27 = getelementptr inbounds i8*, i8** %26, i64 0
  %28 = load i8*, i8** %27
  %29 = load i32, i32* %7
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  store i8 %32, i8* %8
  store i32 1, i32* %9
  br label %34
34:
  %35 = load i32, i32* %9
  %36 = load i32, i32* %5
  %37 = icmp slt i32 %35, %36
  br i1 %37, label %39, label %38
38:
  store i32 4, i32* %10
  br label %62
39:
  %40 = load i8**, i8*** %4
  %41 = load i32, i32* %9
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8*, i8** %40, i64 %42
  %44 = load i8*, i8** %43
  %45 = load i32, i32* %7
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = load i8, i8* %8
  %51 = sext i8 %50 to i32
  %52 = icmp ne i32 %49, %51
  br i1 %52, label %53, label %58
53:
  %54 = load i8*, i8** %6
  %55 = load i32, i32* %7
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  store i8 0, i8* %57
  store i32 1, i32* %10
  br label %62
58:
  br label %59
59:
  %60 = load i32, i32* %9
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %9
  br label %34
62:
  %64 = load i32, i32* %10
  switch i32 %64, label %73 [
    i32 4, label %65
  ]
65:
  %66 = load i8, i8* %8
  %67 = load i8*, i8** %6
  %68 = load i32, i32* %7
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  store i8 %66, i8* %70
  %71 = load i32, i32* %7
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %7
  store i32 0, i32* %10
  br label %73
73:
  %74 = load i32, i32* %10
  switch i32 %74, label %81 [
    i32 0, label %75
  ]
75:
  br label %16
76:
  %77 = load i8*, i8** %6
  %78 = load i32, i32* %7
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %77, i64 %79
  store i8 0, i8* %80
  store i32 0, i32* %10
  br label %81
81:
  %83 = load i32, i32* %10
  switch i32 %83, label %85 [
    i32 0, label %84
    i32 1, label %84
  ]
84:
  ret void
85:
  unreachable
}

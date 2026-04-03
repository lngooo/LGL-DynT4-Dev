define dso_local void @pjX(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %12 = load i8**, i8*** %4
  %13 = load i8*, i8** %12
  store i8* %13, i8** %7
  store i32 0, i32* %8
  br label %15
15:
  %16 = load i8*, i8** %7
  %17 = load i32, i32* %8
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %22, label %71
22:
  store i32 1, i32* %9
  br label %24
24:
  %25 = load i32, i32* %9
  %26 = load i32, i32* %5
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %29, label %28
28:
  store i32 4, i32* %10
  br label %56
29:
  %30 = load i8**, i8*** %4
  %31 = load i32, i32* %9
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8*, i8** %30, i64 %32
  %34 = load i8*, i8** %33
  %35 = load i32, i32* %8
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %7
  %41 = load i32, i32* %8
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp ne i32 %39, %45
  br i1 %46, label %47, label %52
47:
  %48 = load i8*, i8** %6
  %49 = load i32, i32* %8
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  store i8 0, i8* %51
  store i32 1, i32* %10
  br label %56
52:
  br label %53
53:
  %54 = load i32, i32* %9
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %9
  br label %24
56:
  %58 = load i32, i32* %10
  switch i32 %58, label %76 [
    i32 4, label %59
  ]
59:
  %60 = load i8*, i8** %7
  %61 = load i32, i32* %8
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  %64 = load i8, i8* %63
  %65 = load i8*, i8** %6
  %66 = load i32, i32* %8
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  store i8 %64, i8* %68
  %69 = load i32, i32* %8
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %8
  br label %15
71:
  %72 = load i8*, i8** %6
  %73 = load i32, i32* %8
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %72, i64 %74
  store i8 0, i8* %75
  store i32 0, i32* %10
  br label %76
76:
  %79 = load i32, i32* %10
  switch i32 %79, label %81 [
    i32 0, label %80
    i32 1, label %80
  ]
80:
  ret void
81:
  unreachable
}

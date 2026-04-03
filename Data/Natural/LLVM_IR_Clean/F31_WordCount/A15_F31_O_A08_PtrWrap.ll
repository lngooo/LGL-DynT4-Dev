define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8**
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i8
  store i8* %0, i8** %2
  store i8** %2, i8*** %3
  store i32 0, i32* %4
  %12 = load i8**, i8*** %3
  %13 = load i8*, i8** %12
  %14 = call i64 @strlen(i8* %13)
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %5
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %5
  %20 = icmp slt i32 %18, %19
  br i1 %20, label %23, label %21
21:
  br label %67
23:
  %24 = load i8**, i8*** %3
  %25 = load i8*, i8** %24
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  store i8 %29, i8* %7
  %30 = load i32, i32* %6
  %31 = icmp eq i32 %30, 0
  br i1 %31, label %32, label %33
32:
  br label %42
33:
  %34 = load i8**, i8*** %3
  %35 = load i8*, i8** %34
  %36 = load i32, i32* %6
  %37 = sub nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  br label %42
42:
  %43 = phi i32 [ 32, %32 ], [ %41, %33 ]
  %44 = trunc i32 %43 to i8
  store i8 %44, i8* %8
  %45 = load i8, i8* %7
  %46 = sext i8 %45 to i32
  %47 = icmp ne i32 %46, 32
  br i1 %47, label %48, label %63
48:
  %49 = load i8, i8* %7
  %50 = sext i8 %49 to i32
  %51 = icmp ne i32 %50, 9
  br i1 %51, label %52, label %63
52:
  %53 = load i8, i8* %8
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 32
  br i1 %55, label %60, label %56
56:
  %57 = load i8, i8* %8
  %58 = sext i8 %57 to i32
  %59 = icmp eq i32 %58, 9
  br i1 %59, label %60, label %63
60:
  %61 = load i32, i32* %4
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %4
  br label %63
63:
  br label %64
64:
  %65 = load i32, i32* %6
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %6
  br label %17
67:
  %68 = load i32, i32* %4
  ret i32 %68
}
declare i64 @strlen(i8*)

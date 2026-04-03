define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %9 = load i8*, i8** %4
  %10 = call i64 @strlen(i8* %9)
  %11 = load i8*, i8** %5
  %12 = call i64 @strlen(i8* %11)
  %13 = icmp ne i64 %10, %12
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %3
  br label %75
15:
  store i64 0, i64* %6
  store i64 0, i64* %7
  store i32 0, i32* %8
  br label %19
19:
  %20 = load i8*, i8** %4
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %28, label %26
26:
  br label %64
28:
  %29 = load i8*, i8** %4
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i64
  %35 = load i64, i64* %6
  %36 = xor i64 %35, %34
  store i64 %36, i64* %6
  %37 = load i8*, i8** %5
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i64
  %43 = load i64, i64* %6
  %44 = xor i64 %43, %42
  store i64 %44, i64* %6
  %45 = load i8*, i8** %4
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i64
  %51 = load i64, i64* %7
  %52 = add nsw i64 %51, %50
  store i64 %52, i64* %7
  %53 = load i8*, i8** %5
  %54 = load i32, i32* %8
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i64
  %59 = load i64, i64* %7
  %60 = sub nsw i64 %59, %58
  store i64 %60, i64* %7
  br label %61
61:
  %62 = load i32, i32* %8
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %8
  br label %19
64:
  %65 = load i64, i64* %6
  %66 = icmp eq i64 %65, 0
  br i1 %66, label %67, label %70
67:
  %68 = load i64, i64* %7
  %69 = icmp eq i64 %68, 0
  br label %70
70:
  %71 = phi i1 [ false, %64 ], [ %69, %67 ]
  %72 = zext i1 %71 to i32
  store i32 %72, i32* %3
  br label %75
75:
  %76 = load i32, i32* %3
  ret i32 %76
}
declare i64 @strlen(i8*)

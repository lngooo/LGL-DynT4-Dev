define dso_local i32 @LruR4(i32 %0) {
  %2 = alloca i32
  %3 = alloca i8*
  store i32 %0, i32* %2
  store i8* %5, i8** %3
  %6 = load i8*, i8** %3
  %7 = getelementptr inbounds i8, i8* %6, i64 3
  %8 = load i8, i8* %7
  %9 = zext i8 %8 to i32
  %10 = load i8*, i8** %3
  %11 = getelementptr inbounds i8, i8* %10, i64 0
  %12 = load i8, i8* %11
  %13 = zext i8 %12 to i32
  %14 = xor i32 %13, %9
  %15 = trunc i32 %14 to i8
  store i8 %15, i8* %11
  %16 = load i8*, i8** %3
  %17 = getelementptr inbounds i8, i8* %16, i64 0
  %18 = load i8, i8* %17
  %19 = zext i8 %18 to i32
  %20 = load i8*, i8** %3
  %21 = getelementptr inbounds i8, i8* %20, i64 3
  %22 = load i8, i8* %21
  %23 = zext i8 %22 to i32
  %24 = xor i32 %23, %19
  %25 = trunc i32 %24 to i8
  store i8 %25, i8* %21
  %26 = load i8*, i8** %3
  %27 = getelementptr inbounds i8, i8* %26, i64 3
  %28 = load i8, i8* %27
  %29 = zext i8 %28 to i32
  %30 = load i8*, i8** %3
  %31 = getelementptr inbounds i8, i8* %30, i64 0
  %32 = load i8, i8* %31
  %33 = zext i8 %32 to i32
  %34 = xor i32 %33, %29
  %35 = trunc i32 %34 to i8
  store i8 %35, i8* %31
  %36 = load i8*, i8** %3
  %37 = getelementptr inbounds i8, i8* %36, i64 2
  %38 = load i8, i8* %37
  %39 = zext i8 %38 to i32
  %40 = load i8*, i8** %3
  %41 = getelementptr inbounds i8, i8* %40, i64 1
  %42 = load i8, i8* %41
  %43 = zext i8 %42 to i32
  %44 = xor i32 %43, %39
  %45 = trunc i32 %44 to i8
  store i8 %45, i8* %41
  %46 = load i8*, i8** %3
  %47 = getelementptr inbounds i8, i8* %46, i64 1
  %48 = load i8, i8* %47
  %49 = zext i8 %48 to i32
  %50 = load i8*, i8** %3
  %51 = getelementptr inbounds i8, i8* %50, i64 2
  %52 = load i8, i8* %51
  %53 = zext i8 %52 to i32
  %54 = xor i32 %53, %49
  %55 = trunc i32 %54 to i8
  store i8 %55, i8* %51
  %56 = load i8*, i8** %3
  %57 = getelementptr inbounds i8, i8* %56, i64 2
  %58 = load i8, i8* %57
  %59 = zext i8 %58 to i32
  %60 = load i8*, i8** %3
  %61 = getelementptr inbounds i8, i8* %60, i64 1
  %62 = load i8, i8* %61
  %63 = zext i8 %62 to i32
  %64 = xor i32 %63, %59
  %65 = trunc i32 %64 to i8
  store i8 %65, i8* %61
  %66 = load i32, i32* %2
  ret i32 %66
}
